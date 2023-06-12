#include <iostream>
using namespace std;

class DiamondCompany
{
private:
	int comp_id;
	string comp_name;
	int comp_staff_quantity;
	double comp_revenue;
	int comp_import_raw_diamonds;
	int comp_export_diamonds;
	string comp_ceo;

public:
	DiamondCompany(int id, string name, int staff_quantity, double revenue, int import_raw_diamonds, int export_diamonds, string ceo)
		: comp_id(id), comp_name(name), comp_staff_quantity(staff_quantity), comp_revenue(revenue),
		  comp_import_raw_diamonds(import_raw_diamonds), comp_export_diamonds(export_diamonds), comp_ceo(ceo) {}

	void displayCompanyInfo()
	{
		cout << "Company ID: " << comp_id << endl;
		cout << "Company Name: " << comp_name << endl;
		cout << "Staff Quantity: " << comp_staff_quantity << endl;
		cout << "Annual Revenue: " << comp_revenue << endl;
		cout << "Imported Raw Diamonds: " << comp_import_raw_diamonds << endl;
		cout << "Exported Diamonds: " << comp_export_diamonds << endl;
		cout << "CEO: " << comp_ceo << endl;
		cout << "--------------------------------------" << endl;
	}
};

vector<DiamondCompany> getDiamondCompaniesInfo(int n)
{
	vector<DiamondCompany> diamondCompanies;
	for (int i = 0; i < n; i++)
	{
		cout << "Enter details for Diamond Company " << i + 1 << endl;
		int comp_id;
		string comp_name;
		int comp_staff_quantity;
		double comp_revenue;
		int comp_import_raw_diamonds;
		int comp_export_diamonds;
		string comp_ceo;

		cout << "Enter Company ID: ";
		cin >> comp_id;
		cin.ignore(); // Ignore newline character in the input buffer

		cout << "Enter Company Name: ";
		getline(cin, comp_name);

		cout << "Enter Staff Quantity: ";
		cin >> comp_staff_quantity;

		cout << "Enter Annual Revenue: ";
		cin >> comp_revenue;

		cout << "Enter Imported Raw Diamonds: ";
		cin >> comp_import_raw_diamonds;

		cout << "Enter Exported Diamonds: ";
		cin >> comp_export_diamonds;

		cin.ignore(); // Ignore newline character in the input buffer

		cout << "Enter CEO Name: ";
		getline(cin, comp_ceo);

		DiamondCompany diamondCompany(comp_id, comp_name, comp_staff_quantity, comp_revenue,
									  comp_import_raw_diamonds, comp_export_diamonds, comp_ceo);

		diamondCompanies.push_back(diamondCompany);
		cout << endl;
	}

	return diamondCompanies;
}

int main()
{
	int N;
	cout << "Enter the number of Diamond Companies: ";
	cin >> N;

	vector<DiamondCompany> companiesInfo = getDiamondCompaniesInfo(N);

	// Display information for all diamond companies
	for (const auto &company : companiesInfo)
	{
		company.displayCompanyInfo();
	}

	return 0;
}
